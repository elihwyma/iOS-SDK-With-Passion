/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

#import <CoverSheet/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@protocol UICoordinateSpace;

@interface CSPresentation : NSObject <Swift>

{
    NSMutableArray *_regions;
    id <UICoordinateSpace> _coordinateSpace;
    NSString *_identifier;
}

@property (weak, nonatomic) id <UICoordinateSpace> coordinateSpace;
@property (copy, nonatomic, readonly) NSArray *regions;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <UICoordinateSpace> presentationCoordinateSpace;
@property (copy, nonatomic, readonly) NSArray *presentationRegions;
@property (nonatomic, readonly) struct CGRect bounds;

+ (id)presentation;
+ (id)presentationWithCoordinateSpace:(id)arg1;
+ (id)presentationForProvider:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (void)addRegion:(id)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (void)addRegions:(id)arg1;
- (id)regionsIntersectingCoordinateSpace:(id)arg1;
- (void)unionPresentation:(id)arg1;
- (id)firstRegionIntersectingCoordinateSpace:(id)arg1 excludingRegionsWithRole:(long long)arg2;
- (_Bool)intersectsCoordinateSpace:(id)arg1;
- (id)firstRegionIntersectingCoordinateSpace:(id)arg1;
- (id)presentationForRole:(long long)arg1;
- (struct UIEdgeInsets)suggestedInsetsForPreferredContentFrame:(struct CGRect)arg1;

@end
