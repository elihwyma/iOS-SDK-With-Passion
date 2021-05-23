/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSData, NSNumber, NSString;

@interface MSPLowFuelDetails : NSObject

{
    NSString *_title;
    NSString *_subtitle;
    NSNumber *_engineType;
    NSData *_iconData;
    NSData *_iconDataCarPlay;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSNumber *engineType;
@property (retain, nonatomic) NSData *iconData;
@property (retain, nonatomic) NSData *iconDataCarPlay;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 engineType:(id)arg3;

@end
