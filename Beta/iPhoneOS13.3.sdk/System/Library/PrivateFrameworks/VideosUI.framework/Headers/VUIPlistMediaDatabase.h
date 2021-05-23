/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSURL;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VUIPlistMediaDatabase : NSObject

{
    NSURL *_fileURL;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    NSObject<OS_dispatch_source> *_databaseFileDispatchSource;
    NSMutableDictionary *_homeVideoByIdentifier;
    NSMutableDictionary *_movieByIdentifier;
    NSMutableDictionary *_movieRentalByIdentifier;
    NSMutableDictionary *_showByIdentifier;
}

@property (copy, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *databaseFileDispatchSource;
@property (retain, nonatomic) NSMutableDictionary *homeVideoByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *movieByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *movieRentalByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *showByIdentifier;
@property (nonatomic, readonly) NSArray *homeVideos;
@property (nonatomic, readonly) NSArray *movies;
@property (nonatomic, readonly) NSArray *movieRentals;
@property (nonatomic, readonly) NSArray *shows;
@property (nonatomic, readonly) NSArray *seasons;
@property (nonatomic, readonly) NSArray *episodes;

+ (id)_sortedEntitiesArray:(id)arg1;
+ (void)_addItem:(id)arg1 itemByIdentifier:(id)arg2;
+ (void)_removeItem:(id)arg1 itemByIdentifier:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)itemForIdentifier:(id)arg1;
- (_Bool)_saveWithError:(out id *)arg1;
- (id)_seasons;
- (_Bool)_parseDatabase;
- (void)_startMonitoringDatabaseFile;
- (void)_addShow:(id)arg1;
- (void)_addSeason:(id)arg1 showIdentifier:(id)arg2;
- (void)_addEpisode:(id)arg1 showIdentifier:(id)arg2 seasonIdentifier:(id)arg3;
- (void)_addHomeVideo:(id)arg1;
- (void)_addMovie:(id)arg1;
- (void)_addMovieRental:(id)arg1;
- (void)removeDownloadedMediaForIdentifier:(id)arg1;
- (void)_removeEntityWithIdentifier:(id)arg1;
- (id)entityForIdentifier:(id)arg1;
- (void)updateEntity:(id)arg1 propertyName:(id)arg2 propertyValue:(id)arg3;
- (_Bool)saveToFileURL:(id)arg1 error:(out id *)arg2;
- (void)_removeMovie:(id)arg1;
- (void)_removeMovieRental:(id)arg1;
- (void)_removeHomeVideo:(id)arg1;
- (void)_removeShow:(id)arg1;
- (void)_removeSeason:(id)arg1 fromShow:(id)arg2;
- (void)_removeEpisode:(id)arg1 fromSeason:(id)arg2;
- (void)_parseDatabaseAndSendNotification;
- (void)addEntity:(id)arg1 showIdentifier:(id)arg2 seasonIdentifier:(id)arg3;
- (void)removeEntityWithIdentifier:(id)arg1;
- (void)updateEntityWithIdentifier:(id)arg1 propertyName:(id)arg2 propertyValue:(id)arg3;

@end
