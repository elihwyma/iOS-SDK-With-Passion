/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface CalDAVCalendarUserAddress : NSObject

{
    NSURL *_address;
    long long _preferred;
}

@property (retain, nonatomic) NSURL *address;
@property long long preferred;

+ (id)unpackCalDAVUserAdress:(id)arg1;
+ (id)packCalDAVUserAdress:(id)arg1;
+ (id)preferredAddress:(id)arg1;
+ (long long)defaultPreferredAttribute;
+ (id)_minPreferredAddress:(id)arg1;
+ (id)_preferredAddressNoPreferred:(id)arg1;

- (long long)compare:(id)arg1;
- (id)initWithAddress:(id)arg1 preferred:(long long)arg2;

@end
