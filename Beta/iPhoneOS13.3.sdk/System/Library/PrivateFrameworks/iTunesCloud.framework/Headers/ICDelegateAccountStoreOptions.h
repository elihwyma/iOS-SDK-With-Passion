/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSString, NSXPCListenerEndpoint;

@interface ICDelegateAccountStoreOptions : NSObject <Swift>

{
    NSString *_databasePath;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSString *_serviceName;
    _Bool _singleWriter;
}

@property (copy, nonatomic) NSString *databasePath;
@property (nonatomic, getter=isSingleWriter) _Bool singleWriter;
@property (retain, nonatomic) NSXPCListenerEndpoint *XPCEndpoint;
@property (copy, nonatomic) NSString *XPCServiceName;

+ (_Bool)supportsSecureCoding;
+ (id)defaultOptionsWithServiceEndpoint:(id)arg1;
+ (id)defaultOptionsWithServiceName:(id)arg1;
+ (id)singleWriterOptionsWithDatabasePath:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
