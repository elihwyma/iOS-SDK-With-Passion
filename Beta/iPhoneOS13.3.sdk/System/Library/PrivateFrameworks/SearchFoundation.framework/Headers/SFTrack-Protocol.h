/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, SFActionItem;

@protocol SFTrack <Swift>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *number;
@property (copy, nonatomic) NSString *duration;
@property (nonatomic) _Bool highlighted;
@property (copy, nonatomic) NSURL *preview;
@property (retain, nonatomic) SFActionItem *playAction;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
