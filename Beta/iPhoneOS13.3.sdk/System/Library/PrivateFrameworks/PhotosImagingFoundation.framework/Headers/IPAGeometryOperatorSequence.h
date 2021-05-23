/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@class NSMutableArray, NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface IPAGeometryOperatorSequence : IPAGeometryOperator

{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *map_identifierToOperator;
    NSMutableDictionary *map_identifierToIndex;
    NSMutableArray *_operators;
}

+ (id)sequence;
+ (id)sequenceWithIdentifier:(id)arg1;

- (id)description;
- (unsigned long long)count;
- (id)initWithIdentifier:(id)arg1;
- (id)transformForGeometry:(id)arg1;
- (_Bool)appendOperator:(id)arg1;
- (_Bool)replaceOperatorWithIdentifier:(id)arg1 withOperator:(id)arg2;
- (_Bool)removeOperatorWithIdentifier:(id)arg1;
- (id)subsequenceFrom:(id)arg1 to:(id)arg2;

@end
