/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WBSFormAutoFillCorrectionSet : NSObject

{
    NSString *_domain;
    NSDictionary *_fingerprintsToClassifications;
    NSDictionary *_fingerprintsToCorrections;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSDictionary *fingerprintsToClassifications;
@property (nonatomic, readonly) NSDictionary *fingerprintsToCorrections;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDomain:(id)arg1 fingerprintsToClassifications:(id)arg2;
- (id)initWithDomain:(id)arg1 fingerprintsToCorrections:(id)arg2;

@end
