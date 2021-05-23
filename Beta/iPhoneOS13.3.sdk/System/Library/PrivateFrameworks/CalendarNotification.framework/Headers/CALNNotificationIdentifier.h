/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CALNNotificationIdentifier : NSObject

{
    NSString *_sourceIdentifier;
    NSString *_sourceClientIdentifier;
    NSString *_stringRepresentation;
}

@property (copy, nonatomic, readonly) NSString *sourceIdentifier;
@property (copy, nonatomic, readonly) NSString *sourceClientIdentifier;
@property (copy, nonatomic, readonly) NSString *stringRepresentation;

+ (id)_allowedCharacterSetForEncodingNotificationIdentifierComponents;
+ (id)_constructNotificationIdentifierStringRepresentationFromComponents:(id)arg1;
+ (id)_deconstructNotificationIdentifierStringRepresentationIntoComponents:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStringRepresentation:(id)arg1;
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 stringRepresentation:(id)arg3;
- (_Bool)isEqualToNotificationIdentifier:(id)arg1;

@end
