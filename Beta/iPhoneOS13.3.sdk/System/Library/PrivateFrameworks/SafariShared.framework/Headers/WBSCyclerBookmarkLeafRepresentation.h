/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSCyclerBookmarkRepresentation.h>

@class NSURL;

@interface WBSCyclerBookmarkLeafRepresentation : WBSCyclerBookmarkRepresentation

{
    NSURL *_url;
}

@property (retain, nonatomic, setter=setURL:) NSURL *url;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)initWithURL:(id)arg1 title:(id)arg2 uniqueIdentifier:(id)arg3;

@end
