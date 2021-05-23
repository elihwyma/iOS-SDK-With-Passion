/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, SFActionItem;

@interface SFTrack : NSObject <Swift>

{
    struct {
        unsigned int highlighted:1;
    } _has;
    _Bool _highlighted;
    NSString *_title;
    NSString *_number;
    NSString *_duration;
    NSURL *_preview;
    SFActionItem *_playAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *number;
@property (copy, nonatomic) NSString *duration;
@property (nonatomic) _Bool highlighted;
@property (copy, nonatomic) NSURL *preview;
@property (retain, nonatomic) SFActionItem *playAction;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasHighlighted;

@end
