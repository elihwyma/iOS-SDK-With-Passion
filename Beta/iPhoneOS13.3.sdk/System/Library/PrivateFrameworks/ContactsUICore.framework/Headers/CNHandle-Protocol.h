/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <ContactsUICore/Swift-Protocol.h>

@class NSString;

@protocol CNHandle <Swift>

@property (copy, nonatomic, readonly) NSString *stringValue;
@property (copy, nonatomic, readonly) NSString *customIdentifier;
@property (nonatomic, readonly) unsigned long long type;

@end
