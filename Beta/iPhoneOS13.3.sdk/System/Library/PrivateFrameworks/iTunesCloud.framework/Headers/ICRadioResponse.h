/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICStoreDialogResponse, NSDate, NSDictionary, NSError;

@interface ICRadioResponse : NSObject

{
    NSDate *_expirationDate;
    NSDictionary *_responseDictionary;
}

@property (copy, nonatomic, readonly) NSDictionary *contentDictionary;
@property (copy, nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) long long version;
@property (copy, nonatomic, readonly) ICStoreDialogResponse *dialog;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic, readonly) NSError *serverError;

- (id)initWithURLResponse:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2;

@end
