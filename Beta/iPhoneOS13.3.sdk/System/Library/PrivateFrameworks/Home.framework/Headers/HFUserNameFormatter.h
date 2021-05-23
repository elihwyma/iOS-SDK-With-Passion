/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSFormatter.h>

@class CNContactFormatter, HMHome;

@interface HFUserNameFormatter : NSFormatter

{
    unsigned long long _style;
    HMHome *_home;
    CNContactFormatter *_contactFormatter;
}

@property (nonatomic, readonly) CNContactFormatter *contactFormatter;
@property (nonatomic) unsigned long long style;
@property (nonatomic, readonly) HMHome *home;

+ (long long)_contactFormatterStyleForUserNameStyle:(unsigned long long)arg1;

- (id)init;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithHome:(id)arg1;

@end
