/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface WFWordPressFile : MTLModel

{
    NSNumber *_fileId;
    NSString *_filename;
    NSURL *_url;
    NSString *_type;
}

@property (copy, nonatomic, readonly) NSNumber *fileId;
@property (copy, nonatomic, readonly) NSString *filename;
@property (copy, nonatomic, readonly) NSURL *url;
@property (copy, nonatomic, readonly) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)fileIdJSONTransformer;

@end
