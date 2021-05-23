/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/Swift-Protocol.h>

@class NSArray;

@protocol CHStrokeProviderVersion;

@protocol CHStrokeProvider <Swift>

@property (retain, readonly) id <CHStrokeProviderVersion> strokeProviderVersion;
@property (copy, readonly) NSArray *orderedStrokes;

- (unsigned short)strokeForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)compareOrderOfStrokeWithIdentifier:toStrokeWithIdentifier: /* Error: Ran out of types for this method. */;

@end
