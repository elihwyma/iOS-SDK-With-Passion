/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, SFActionItem, SFImage;

@protocol SFMediaOffer <Swift>

@property (retain, nonatomic) SFActionItem *actionItem;
@property (copy, nonatomic) NSString *sublabel;
@property (copy, nonatomic) NSString *offerIdentifier;
@property (nonatomic) _Bool isEnabled;
@property (retain, nonatomic) SFImage *image;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
