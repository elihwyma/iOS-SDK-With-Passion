/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSString;

@interface WFEmailAddress : NSObject <Swift>

{
    NSString *_address;
    NSString *_label;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *localizedLabel;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (_Bool)stringContainsEmailAddresses:(id)arg1;
+ (id)addressWithEmailAddress:(id)arg1;
+ (id)emailAddressesInString:(id)arg1 error:(id *)arg2;
+ (id)addressesWithTextCheckingResult:(id)arg1;
+ (id)addressesWithMailtoURL:(id)arg1;
+ (id)addressWithEmailAddress:(id)arg1 label:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)wfSerializedRepresentation;
- (id)initWithAddress:(id)arg1 label:(id)arg2;

@end
