/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFiTunesStoreObject.h>

@class NSDictionary, NSNumber, NSString;

@interface WFiTunesCollectionObject : WFiTunesStoreObject

{
    NSString *_type;
    NSString *_genre;
    NSNumber *_trackCount;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) NSNumber *trackCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;

@end
