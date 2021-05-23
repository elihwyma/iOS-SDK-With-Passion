/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class EMMailboxScope, NSPredicate, NSString;

@interface EMThreadScope : NSObject <Swift>

{
    EMMailboxScope *_mailboxScope;
    NSPredicate *_filterPredicate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (nonatomic, readonly) NSPredicate *filterPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cachedSelf;
- (id)initWithMailboxScope:(id)arg1 filterPredicate:(id)arg2;

@end
