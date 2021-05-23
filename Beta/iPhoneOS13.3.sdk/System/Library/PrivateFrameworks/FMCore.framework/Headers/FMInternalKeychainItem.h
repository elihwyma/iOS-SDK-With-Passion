/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface FMInternalKeychainItem : NSObject

{
    NSString *_password;
    NSDate *_lastModifyDate;
    NSDate *_creationDate;
    NSData *_rawData;
}

@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSDate *lastModifyDate;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSData *rawData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithResults:(id)arg1;

@end
