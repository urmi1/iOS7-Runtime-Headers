/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBundle : NSObject  {
    unsigned int _flags;
    id _cfBundle;
    unsigned int _reserved2;
    Class _principalClass;
    id _initialPath;
    id _resolvedPath;
    id _reserved3;
    id _lock;
}

+ (id)bundleWithURL:(id)arg1;
+ (id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
+ (id)debugDescription;
+ (id)mainBundle;
+ (id)bundleWithIdentifier:(id)arg1;
+ (void)setSystemLanguages:(id)arg1;
+ (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3;
+ (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
+ (id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(id)arg3;
+ (id)findBundleResourceURLs:(id)arg1 callingMethod:(SEL)arg2 bundleURL:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned int)arg7;
+ (id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned int)arg7;
+ (id)preferredLocalizationsFromArray:(id)arg1;
+ (id)loadedBundles;
+ (id)allFrameworks;
+ (id)allBundles;
+ (id)bundleForClass:(Class)arg1;
+ (id)bundleWithPath:(id)arg1;
+ (void)popNibLoadingBundle;
+ (void)popNibPath;
+ (void)pushNibPath:(id)arg1;
+ (void)pushNibLoadingBundle:(id)arg1;
+ (id)currentNibLoadingBundle;
+ (id)currentNibPath;
+ (id)_rivenFactory;
+ (id)_typologyBundle;
+ (id)_rivenBundle;
+ (id)__geoBundle;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1;
+ (id)_gkBundleWithIdentifier:(id)arg1;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;
+ (id)__vkBundle;
+ (id)_mapkitBundle;
+ (id)pathForITunesStoreResource:(id)arg1 ofType:(id)arg2;
+ (id)mediaPlayerBundle;
+ (id)pathForITunesResource:(id)arg1 ofType:(id)arg2;
+ (id)pu_PhotosUIFrameworkBundle;

- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)builtInPlugInsPath;
- (id)executablePath;
- (id)resourcePath;
- (unsigned int)versionNumber;
- (Class)classNamed:(id)arg1;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)initWithURL:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (oneway void)release;
- (BOOL)load;
- (id)description;
- (id)bundleIdentifier;
- (id)preferredLocalizations;
- (id)executableArchitectures;
- (BOOL)preflightAndReturnError:(id*)arg1;
- (id)localizationsToSearch;
- (id)developmentLocalization;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4;
- (id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3;
- (id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4;
- (id)_regionsArray;
- (Class)principalClass;
- (void)invalidateResourceCache;
- (id)bundleLanguages;
- (id)builtInPlugInsURL;
- (id)sharedSupportURL;
- (id)sharedSupportPath;
- (id)sharedFrameworksURL;
- (id)sharedFrameworksPath;
- (id)privateFrameworksURL;
- (id)privateFrameworksPath;
- (id)URLForAuxiliaryExecutable:(id)arg1;
- (id)pathForAuxiliaryExecutable:(id)arg1;
- (id)appStoreReceiptURL;
- (id)executableURL;
- (id)resourceURL;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(id)arg2;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;
- (BOOL)isLoaded;
- (id)localizedInfoDictionary;
- (id)localizations;
- (id)infoDictionary;
- (id)bundleURL;
- (id)initWithPath:(id)arg1;
- (BOOL)unload;
- (BOOL)loadAndReturnError:(id*)arg1;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)bundlePath;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4;
- (struct __CFBundle { }*)_cfBundle;
- (id)_cachedMainBundleResourcePath;
- (id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3;
- (id)_gkPreferredLanguage;
- (id)_gkPathForChallengeSound;
- (id)_gkPathForInviteSound;
- (BOOL)_gkIsBadgingEnabled;
- (id)_gkPathForSoundWithName:(id)arg1;
- (BOOL)_gkIsGameCenterUIService;
- (BOOL)_gkIsGameCenter;
- (id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3;
- (id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;
- (id)_gkLocalizedName;
- (id)_gkBundleVersion;
- (id)PKSanitizedBundleIdentifier;
- (id)newDataURLForResource:(id)arg1 ofType:(id)arg2 withMIMEType:(id)arg3;

@end
