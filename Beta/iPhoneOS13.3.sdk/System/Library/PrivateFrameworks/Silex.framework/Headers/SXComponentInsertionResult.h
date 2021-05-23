/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXComponentInsert;

@protocol SXBlueprintMarker;

@interface SXComponentInsertionResult : NSObject

{
    SXComponentInsert *_insert;
    id <SXBlueprintMarker> _marker;
}

@property (nonatomic, readonly) SXComponentInsert *insert;
@property (nonatomic, readonly) id <SXBlueprintMarker> marker;

- (id)initWithInsert:(id)arg1 marker:(id)arg2;

@end
