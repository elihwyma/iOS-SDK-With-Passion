/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary;

@interface BCImageStore : NSObject

{
    NSArray *_rawArray;
    NSDictionary *_dictionary;
    NSData *_data;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSArray *rawArray;
@property (retain, nonatomic) NSDictionary *dictionary;

- (id)initWithArray:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithImages:(id)arg1;
- (id)generateImageDictionaryFromArray:(id)arg1;
- (id)stringPaddedForBase64:(id)arg1;

@end
