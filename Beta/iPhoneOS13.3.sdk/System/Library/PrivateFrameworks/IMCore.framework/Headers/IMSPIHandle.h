/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMPerson, NSString;

@interface IMSPIHandle : NSObject

{
    NSString *_address;
    NSString *_countryCode;
    _Bool _isMe;
    IMPerson *_imPerson;
    _Bool _haveFetchedIMPerson;
}

@property (readonly) NSString *address;
@property (readonly) _Bool isMe;
@property (readonly) _Bool isBusiness;
@property (readonly) NSString *businessName;
@property (readonly) NSString *countryCode;
@property (readonly) NSString *displayName;
@property (readonly) NSString *cnContactID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)person;
- (id)initWithAddress:(id)arg1 countryCode:(id)arg2 isMe:(_Bool)arg3;

@end
