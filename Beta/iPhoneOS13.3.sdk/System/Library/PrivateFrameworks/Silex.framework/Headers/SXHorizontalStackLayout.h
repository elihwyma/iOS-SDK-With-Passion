/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SXHorizontalStackLayout : NSObject

{
    NSMutableDictionary *_widths;
    NSMutableDictionary *_positions;
}

@property (nonatomic, readonly) NSMutableDictionary *widths;
@property (nonatomic, readonly) NSMutableDictionary *positions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setWidth:(double)arg1 forIdentifier:(id)arg2;
- (double)widthForIdentifier:(id)arg1;
- (void)setPosition:(double)arg1 forIdentifier:(id)arg2;
- (double)positionForIdentifier:(id)arg1;

@end
