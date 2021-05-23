/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary;

@interface WLKChannelsResponse : NSObject

{
    _Bool _filtered;
    NSArray *_orderedChannels;
    NSDictionary *_channels;
    NSDate *_expirationDate;
    unsigned long long _environmentHash;
}

@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) _Bool filtered;
@property (nonatomic) unsigned long long environmentHash;
@property (retain, nonatomic) NSArray *orderedChannels;
@property (retain, nonatomic) NSDictionary *channels;

+ (id)parseChannelsFromPayload:(id)arg1;

- (id)initWithDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3 filtered:(_Bool)arg4;
- (_Bool)isValidForFiltered:(_Bool)arg1;

@end
