#import <Cocoa/Cocoa.h>


@interface MQLyrics : NSObject {

}

+ (void)setShouldCache:(BOOL)x;
+ (void)setCheckOnline:(BOOL)x;
+ (void)setCheckItunes:(BOOL)x;

+ (MQLyricsContainer *)lyricsWithArtist:(NSString *)artist title:(NSString *)title;
+ (MQLyricsContainer *)checkOnlineWithArtist:(NSString *)artist title:(NSString *)title;
+ (MQLyricsContainer *)lyricsFromCurrentiTunesTrack;
+ (MQLyricsContainer *)lyricsFromCurrentiTunesTrackOffline;

+ (NSString *)cleanUpLyricsString:(NSString *)theLyrics;
+ (BOOL)isEmpty:(MQLyricsContainer *)x;


@end
