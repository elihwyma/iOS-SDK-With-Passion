/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSURI;

@interface IDSHandle : NSObject

{
    IDSURI *_URI;
    _Bool _isUserVisible;
    long long _validationStatus;
}

@property (nonatomic, readonly) IDSURI *URI;
@property (nonatomic, readonly) _Bool isUserVisible;
@property (nonatomic, readonly) long long validationStatus;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithURI:(id)arg1 isUserVisible:(_Bool)arg2 validationStatus:(long long)arg3;
- (_Bool)isEqualToHandle:(id)arg1;

@end
