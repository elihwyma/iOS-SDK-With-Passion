/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCPPTTodayContentDescriptor : NSObject

{
    unsigned long long _contentType;
    NSString *_tagID;
    NSString *_forYouConfigID;
}

@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly) NSString *tagID;
@property (nonatomic, readonly) NSString *forYouConfigID;

+ (id)descriptorWithTagID:(id)arg1;
+ (id)descriptorWithForYouConfigID:(id)arg1 tagID:(id)arg2;
+ (id)descriptorWithForYouConfigID:(id)arg1;

- (id)_initWithTagID:(id)arg1;
- (id)_initWithForYouConfigID:(id)arg1 tagID:(id)arg2;

@end
