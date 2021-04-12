//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSSet, NSString, TUHandle;

@interface TUConversationMember : NSObject <NSCopying, NSSecureCoding>
{
    TUHandle *_handle;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToMember:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)representsSameMemberAs:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *idsDestinations;
@property(readonly, copy, nonatomic) NSString *idsDestination;
@property(readonly, copy, nonatomic) NSSet *handles;
- (id)description;
- (id)initWithDestinations:(id)arg1;
- (id)initWithDestination:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 additionalHandles:(id)arg2;
- (id)initWithHandles:(id)arg1;
- (id)initWithHandle:(id)arg1;

@end

