/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface MCBook : NSObject

{
    NSString *_author;
    NSString *_title;
    NSString *_kind;
    NSString *_fullPath;
    NSString *_version;
    NSString *_persistentID;
    NSNumber *_iTunesStoreID;
    NSString *_buyParams;
    NSString *_state;
    NSNumber *_downloadIdentifier;
    MCBook *_previousVersion;
}

@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *fullPath;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *persistentID;
@property (retain, nonatomic) NSNumber *iTunesStoreID;
@property (copy, nonatomic) NSString *buyParams;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSNumber *downloadIdentifier;
@property (retain, nonatomic) MCBook *previousVersion;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)friendlyName;
- (id)initWithManifestDictionary:(id)arg1;
- (id)manifestDictionary;
- (void)updateBookAttributesByCopyingFromBook:(id)arg1;

@end
