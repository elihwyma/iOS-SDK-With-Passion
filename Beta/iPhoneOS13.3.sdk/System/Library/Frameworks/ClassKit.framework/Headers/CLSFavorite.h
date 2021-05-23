/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSObject.h>

@class NSArray, NSString, NSURL;

@interface CLSFavorite : CLSObject

{
    NSString *_title;
    NSString *_storeIdentifier;
    int _type;
    NSArray *_contextIdentifierPath;
    NSURL *_URL;
    long long _contextType;
    NSString *_bundleIdentifier;
    NSString *_contentStoreIdentifier;
}

@property (retain, nonatomic) NSArray *contextIdentifierPath;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) int type;
@property (nonatomic) long long contextType;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *contentStoreIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *bundleIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)validateObject:(id *)arg1;
- (id)initWithTitle:(id)arg1 contextIdentifierPath:(id)arg2 URL:(id)arg3 type:(int)arg4 contextType:(long long)arg5 andBundleIdentifier:(id)arg6 contentStoreIdentifier:(id)arg7;
- (id)initWithTitle:(id)arg1 context:(id)arg2;
- (id)initWithTitle:(id)arg1 URL:(id)arg2 andBundleIdentifier:(id)arg3;

@end
