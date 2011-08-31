EXPECT_CALL(mock_object, method(matcher1, matcher2, ...))
    .With(multi_argument_matcher)  
    .Times(cardinality)            
    .InSequence(sequences)         
    .After(expectations)           
    .WillOnce(action)            
    .WillRepeatedly(action)        
    .RetiresOnSaturation();