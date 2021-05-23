/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFiTunesObject.h>

@class NSDictionary, NSString;

@interface WFiTunesArtistObject : WFiTunesObject

{
    NSString *_type;
    NSString *_genre;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *genre;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;

@end
