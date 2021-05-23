/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class NSString;

@interface AXHearingAidMode : NSObject

{
    unsigned char _index;
    _Bool _isSelected;
    int _ear;
    int syncAttempts;
    NSString *_name;
    long long _category;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long category;
@property (nonatomic) unsigned char index;
@property (nonatomic) _Bool isSelected;
@property (nonatomic) int ear;
@property (nonatomic) int syncAttempts;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepresentation:(id)arg1;
- (_Bool)isStream;
- (_Bool)isStreamOrMixingStream;
- (id)transportRepresentation;
- (_Bool)isMixingStream;

@end
