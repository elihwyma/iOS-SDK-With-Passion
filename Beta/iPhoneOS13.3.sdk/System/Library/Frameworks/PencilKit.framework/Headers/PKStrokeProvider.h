/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableOrderedSet, NSString, PKDrawing;

@protocol CHStrokeProviderVersion;

@interface PKStrokeProvider : NSObject

{
    _Bool _disabled;
    NSMutableOrderedSet *_strokeSlices;
    PKDrawing *_drawing;
}

@property (nonatomic, readonly) PKDrawing *drawing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, readonly) id <CHStrokeProviderVersion> strokeProviderVersion;
@property (copy, readonly) NSArray *orderedStrokes;

- (id)slices;
- (id)strokeForIdentifier:(id)arg1;
- (id)initWithDrawing:(id)arg1;
- (id)sliceForIdentifier:(id)arg1;
- (long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
- (_Bool)isStroke:(id)arg1 versionOfStrokeWithIdentifier:(id)arg2;
- (long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2;
- (_Bool)enumerateChangesSinceVersion:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
