/*
 Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber, NSString;

@interface FAFetchFamilyPhotoRequest : FAFamilyCircleRequest

{
    _Bool _localFallback;
    _Bool _useMonogramAsLastResort;
    NSNumber *_memberDSID;
    NSString *_memberHashedDSID;
    unsigned long long _requestedSize;
    double _requiredWidth;
    double _requiredHeight;
    double _monogramDiameter;
    long long _backgroundType;
    NSString *_fullname;
    NSString *_emailAddress;
    NSString *_phoneNumber;
}

@property (copy, readonly) NSNumber *memberDSID;
@property (copy, readonly) NSString *memberHashedDSID;
@property (readonly) _Bool localFallback;
@property (readonly) unsigned long long requestedSize;
@property double requiredWidth;
@property double requiredHeight;
@property double monogramDiameter;
@property _Bool useMonogramAsLastResort;
@property long long backgroundType;
@property (copy) NSString *fullname;
@property (copy) NSString *emailAddress;
@property (copy) NSString *phoneNumber;

- (id)init;
- (id)requestOptions;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(_Bool)arg3;
- (id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(_Bool)arg3 connectionProvider:(id)arg4;
- (id)initWithConnectionProvider:(id)arg1;
- (id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(_Bool)arg3 connectionProvider:(id)arg4;
- (id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(_Bool)arg3;

@end
