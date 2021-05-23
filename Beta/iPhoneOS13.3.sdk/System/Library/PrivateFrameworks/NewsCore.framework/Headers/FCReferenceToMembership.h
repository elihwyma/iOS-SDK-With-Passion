/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCReferenceToMembership : NSObject

{
    NSString *_identifier;
    NSString *_membershipID;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *membershipID;

- (id)initWithIdentifier:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithRecord:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2;

@end
