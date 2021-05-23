/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SACFMMessageTextParseChunk.h>

@class NSArray;

@interface SACFMEmojiParseChunk : SACFMMessageTextParseChunk

@property (nonatomic) long long emojiCount;
@property (copy, nonatomic) NSArray *inflectedEmojiList;

+ (id)emojiParseChunk;
+ (id)emojiParseChunkWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
