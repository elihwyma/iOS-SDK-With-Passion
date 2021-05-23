/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/Swift-Protocol.h>

@class NSArray;

@protocol UICoordinateSpace;

@protocol CSPresentationProviding <Swift>

@property (weak, nonatomic, readonly) id <UICoordinateSpace> presentationCoordinateSpace;
@property (copy, nonatomic, readonly) NSArray *presentationRegions;

@end
