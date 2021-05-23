/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class NSArray;

@protocol UICoordinateSpace;

@protocol CSPresentationProviding <Swift>

@property (weak, nonatomic, readonly) id <UICoordinateSpace> presentationCoordinateSpace;
@property (copy, nonatomic, readonly) NSArray *presentationRegions;

@end
