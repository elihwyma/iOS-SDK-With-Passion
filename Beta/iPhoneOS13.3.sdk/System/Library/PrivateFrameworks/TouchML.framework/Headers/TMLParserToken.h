/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString;

@interface TMLParserToken : NSObject

{
    unsigned long long _token;
    NSString *_text;
}

@property (nonatomic, readonly) unsigned long long token;
@property (nonatomic, readonly) NSString *text;

- (id)description;
- (id)initWithToken:(unsigned long long)arg1 text:(id)arg2;

@end
