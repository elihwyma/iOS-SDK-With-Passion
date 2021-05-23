/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSData, NSString;

@protocol _INPBUserActivity <Swift>

@property (copy, nonatomic) NSData *data;
@property (nonatomic, readonly) _Bool hasData;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasTitle;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic, readonly) _Bool hasUri;

@end
