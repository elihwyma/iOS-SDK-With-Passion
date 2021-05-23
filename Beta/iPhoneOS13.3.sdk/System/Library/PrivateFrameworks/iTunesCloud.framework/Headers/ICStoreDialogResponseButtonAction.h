/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface ICStoreDialogResponseButtonAction : NSObject <Swift>

{
    NSDictionary *_actionDictionary;
}

@property (copy, nonatomic, readonly) NSDictionary *actionDictionary;
@property (copy, nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *buyParams;
@property (copy, nonatomic, readonly) NSString *itemName;
@property (copy, nonatomic, readonly) NSString *subtarget;
@property (copy, nonatomic, readonly) NSString *URLString;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseButtonActionDictionary:(id)arg1;

@end
