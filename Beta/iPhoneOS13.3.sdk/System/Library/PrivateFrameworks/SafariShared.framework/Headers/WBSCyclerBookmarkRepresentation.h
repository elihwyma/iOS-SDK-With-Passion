/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface WBSCyclerBookmarkRepresentation : NSObject <Swift>

{
    NSString *_uniqueIdentifier;
    NSString *_title;
    NSDictionary *_extraAttributes;
}

@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *extraAttributes;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)arg1;

@end
