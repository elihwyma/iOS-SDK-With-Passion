/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, fullPropSpec;

@interface cContentRestriction : NSObject

{
    int restrictId;
    unsigned int ulType;
    unsigned int weight;
    unsigned int _charCount;
    unsigned int _lcid;
    int _genMethod;
    fullPropSpec *_propSpec;
    NSData *_pwcsPhrase;
    NSString *_phraseStr;
}

@property (retain) fullPropSpec *propSpec;
@property unsigned int charCount;
@property (retain) NSData *pwcsPhrase;
@property (retain) NSString *phraseStr;
@property unsigned int lcid;
@property int genMethod;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (int)setPhrase:(id)arg1;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (id)initWithMethod:(int)arg1 Weight:(unsigned int)arg2;
- (int)restrictionNumber;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;

@end
