/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@interface _MLInternalNLPModelWriter : NSObject

+ (_Bool)saveCustomSequenceModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id *)arg5;
+ (_Bool)saveCustomWordTaggingModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id *)arg5;
+ (_Bool)saveCustomSentenceModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id *)arg5;
+ (_Bool)saveCustomSentenceClassifierModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id *)arg5;

@end
