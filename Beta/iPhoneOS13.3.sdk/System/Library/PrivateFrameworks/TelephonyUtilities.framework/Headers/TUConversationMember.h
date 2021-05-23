/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSArray, NSSet, NSString, TUHandle;

@interface TUConversationMember : NSObject <Swift>

{
    TUHandle *_handle;
}

@property (copy, nonatomic, readonly) NSString *idsDestination;
@property (copy, nonatomic, readonly) NSArray *idsDestinations;
@property (copy, nonatomic, readonly) TUHandle *handle;
@property (copy, nonatomic, readonly) NSSet *handles;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1;
- (id)initWithDestination:(id)arg1;
- (id)initWithDestinations:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithHandles:(id)arg1;
- (id)initWithContact:(id)arg1 additionalHandles:(id)arg2;
- (_Bool)isEqualToMember:(id)arg1;
- (_Bool)representsSameMemberAs:(id)arg1;

@end
