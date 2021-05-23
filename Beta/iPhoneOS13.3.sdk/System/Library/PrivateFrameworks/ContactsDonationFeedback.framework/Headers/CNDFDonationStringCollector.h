/*
 Image: /System/Library/PrivateFrameworks/ContactsDonationFeedback.framework/ContactsDonationFeedback
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CNDFDonationStringCollector : NSObject

{
    NSMutableArray *_visitedStrings;
}

@property (nonatomic, readonly) NSMutableArray *visitedStrings;
@property (nonatomic, readonly) NSArray *strings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)visitDonationValue:(id)arg1 nameComponents:(id)arg2;
- (void)visitDonationValue:(id)arg1 emailAddress:(id)arg2 label:(id)arg3;
- (void)visitDonationValue:(id)arg1 phoneNumber:(id)arg2 label:(id)arg3;
- (void)visitDonationValue:(id)arg1 postalAddress:(id)arg2 style:(long long)arg3 label:(id)arg4;
- (void)visitDonationValue:(id)arg1 imageData:(id)arg2;
- (void)collectStringsFromDonation:(id)arg1;

@end
