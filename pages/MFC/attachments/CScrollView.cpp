void CEyeView::transformPoint( CPoint& point)
{
    // CSrollView no transform Point. so what you get is the current view is Point
    // this is MFC design bug. you must have DC to now how to transform.
    CClientDC dc(this);
    OnPrepareDC(&dc);
    dc.DPtoLP(&point);
}