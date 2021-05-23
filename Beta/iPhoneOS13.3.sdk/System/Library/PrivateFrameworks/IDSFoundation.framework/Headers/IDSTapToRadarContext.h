/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IDSTapToRadarContext : NSObject

{
    NSString *_title;
    NSString *_problemDescription;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *problemDescription;

- (id)initWithTitle:(id)arg1 problemDescription:(id)arg2;

@end
