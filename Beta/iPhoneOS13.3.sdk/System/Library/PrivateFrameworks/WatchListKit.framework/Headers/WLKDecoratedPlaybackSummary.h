/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString, WLKPlaybackSummary;

@interface WLKDecoratedPlaybackSummary : NSObject

{
    WLKPlaybackSummary *_summary;
    NSString *_canonicalID;
}

@property (nonatomic, readonly) WLKPlaybackSummary *summary;
@property (copy, nonatomic, readonly) NSString *canonicalID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithSummary:(id)arg1 canonicalID:(id)arg2;

@end
