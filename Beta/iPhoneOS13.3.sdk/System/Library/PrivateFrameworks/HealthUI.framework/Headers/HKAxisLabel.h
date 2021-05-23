/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HKAxisLabel : NSObject

{
    NSString *_text;
    id _location;
    long long _labelType;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) id location;
@property (nonatomic) long long labelType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
