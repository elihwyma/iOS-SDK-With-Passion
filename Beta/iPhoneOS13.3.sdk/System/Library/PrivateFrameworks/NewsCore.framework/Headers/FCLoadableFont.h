/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString, NSURL;

@interface FCLoadableFont : NSObject <Swift>

{
    NSString *_fontName;
    NSURL *_fontURL;
}

@property (copy, nonatomic) NSString *fontName;
@property (retain, nonatomic) NSURL *fontURL;

+ (id)loadableFontWithName:(id)arg1 url:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
