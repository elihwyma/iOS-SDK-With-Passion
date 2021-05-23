/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSString, NSURL;

@interface MCFontPayload : MCPayload

{
    NSData *_fontData;
    NSString *_name;
    NSURL *_persistentURL;
}

@property (retain, nonatomic) NSData *fontData;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *persistentURL;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)subtitle1Label;
- (id)subtitle1Description;

@end
