/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSPasswordWordListEntry : NSObject

{
    _Bool _sensitive;
    NSString *_word;
    NSString *_wordListIdentifier;
    unsigned long long _guessesRequired;
}

@property (copy, nonatomic, readonly) NSString *word;
@property (nonatomic, readonly, getter=isSensitive) _Bool sensitive;
@property (copy, nonatomic, readonly) NSString *wordListIdentifier;
@property (nonatomic, readonly) unsigned long long guessesRequired;

- (id)description;
- (id)initWithWord:(id)arg1 isSensitive:(_Bool)arg2 wordListIdentifier:(id)arg3 guessesRequired:(unsigned long long)arg4;

@end
