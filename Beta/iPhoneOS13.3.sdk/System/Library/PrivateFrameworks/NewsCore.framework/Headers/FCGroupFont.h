/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCGroupFont : NSObject

{
    NSString *_name;
    NSString *_urlString;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *urlString;

- (id)init;
- (id)initWithName:(id)arg1 urlString:(id)arg2;

@end
