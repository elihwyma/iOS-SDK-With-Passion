/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface EspressoDataFrame : NSObject

{
    NSMutableDictionary *_inputAttachments;
    NSMutableDictionary *_outputAttachments;
    NSMutableDictionary *_groundTruthAttachments;
    NSString *_function_name;
}

@property (retain) NSMutableDictionary *inputAttachments;
@property (retain) NSMutableDictionary *outputAttachments;
@property (retain) NSMutableDictionary *groundTruthAttachments;
@property (retain) NSString *function_name;
@property (readonly) NSArray *inputAttachmentNames;
@property (readonly) NSArray *outputAttachmentNames;
@property (readonly) NSArray *groundTruthAttachmentNames;

- (id)init;
- (void)loadFromDict:(id)arg1 frameStorage:(id)arg2;
- (id)getInputAttachment:(id)arg1;
- (id)getOutputAttachment:(id)arg1;
- (id)getGroundTruthAttachment:(id)arg1;
- (id)getFunctionName;

@end
